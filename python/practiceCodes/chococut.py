# Read the number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    # Read N, M, and K for this test case
    N, M, K = map(int, input().split())
    
    # Total number of squares in the chocolate bar
    total_squares = N * M
    
    # If K = 0, Alice can keep everything without breaking
    if K == 0:
        print(total_squares)
        continue
    
    # Initialize the maximum squares Alice can keep
    max_alice_squares = 0
    
    # Try all possible vertical cuts (if M > 1)
    if M > 1:
        for a in range(1, M):  # a is the number of columns in the left piece
            left_squares = N * a  # Squares in the left piece
            right_squares = N * (M - a)  # Squares in the right piece
            
            # Give Bob the smaller piece, keep the larger one
            if left_squares >= K:
                alice_keeps = max(left_squares, right_squares)
                max_alice_squares = max(max_alice_squares, alice_keeps)
            if right_squares >= K:
                alice_keeps = max(left_squares, right_squares)
                max_alice_squares = max(max_alice_squares, alice_keeps)
    
    # Try all possible horizontal cuts (if N > 1)
    if N > 1:
        for b in range(1, N):  # b is the number of rows in the top piece
            top_squares = b * M  # Squares in the top piece
            bottom_squares = (N - b) * M  # Squares in the bottom piece
            
            # Give Bob the smaller piece, keep the larger one
            if top_squares >= K:
                alice_keeps = max(top_squares, bottom_squares)
                max_alice_squares = max(max_alice_squares, alice_keeps)
            if bottom_squares >= K:
                alice_keeps = max(top_squares, bottom_squares)
                max_alice_squares = max(max_alice_squares, alice_keeps)
    
    # If no valid cut was found (max_alice_squares is still 0), Alice can't satisfy Bob
    if max_alice_squares == 0:
        print(0)  # Alice can't keep any squares while making Bob happy
    else:
        print(max_alice_squares)