# Problem 9 - Special Pythagorean Triplet

# This nested while loop prints the product of the only
# Pythagorean triplet with a summation of 1000
num1 = 1
while num1 < 500:
    num2 = 2
    while num2 < 500:
        num3 = 3
        while num3 < 500:
            temp1 = num1 ** 2
            temp2 = num2 ** 2
            temp3 = num3 ** 2
            if temp1 + temp2 == temp3 and num1 + num2 + num3 == 1000:
                print num1 * num2 * num3
                break
            num3 += 1
        num2 += 1
    num1 += 1

