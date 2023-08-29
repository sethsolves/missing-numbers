num_list = []
missing_list = []

num = int(input("Please enter the first number: "))
num_list.append(num)

while True:
    num = int(input("Please enter a sequence of numbers (0 to stop): "))
    if num != 0:
        num_list.append(num)
    else:
        break

start = num_list[0]
end = num_list[-1]

for i in range(start, end):
    if i not in num_list:
        missing_list.append(i)

print("The missing numbers are:", missing_list)
