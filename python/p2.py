
sum = 0

max = int(input("Enter the number: "))

while max > 0:
    sum += max % 10
    max //= 10
    
print("The sum of the digits is:", sum)
