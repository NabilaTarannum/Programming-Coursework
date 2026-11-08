def add(num1, num2):
    total = num1 + num2
    print(f"num1: {num1} and num2: {num2}")
    return total


# result = add(12, 14)
# result = add(num2=12, num1=14)


def multiply(num1, num2=1):
    return num1 * num2


output = multiply(45, 2)
# print(output)


def multiply2(*numbers):
    result = 1
    for num in numbers:
        result = result * num
    return result


final_result = multiply2(12, 2, 3, 5, 6)
print(final_result)
