
counterEven = 0
counterOdd = 0

max = int(input("Enter the maximum number: "))

for i in range(1, max + 1):
    if i % 2 == 0:
        counterEven += i
    else:
        counterOdd += i

print("Sum of even numbers:", counterEven)
print("Sum of odd numbers:", counterOdd)