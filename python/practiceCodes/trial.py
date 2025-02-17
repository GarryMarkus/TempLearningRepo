import csv

with open('data.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['Name', 'Age', 'City'])
    writer.writerow(['Alice', 25, 'New York'])
    writer.writerow(['Bob', 30, 'Los Angeles'])

with open('data.csv', 'r') as file:
    reader = csv.reader(file)
    for row in reader:
        print(row)