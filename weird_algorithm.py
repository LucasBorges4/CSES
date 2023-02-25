num = int(input())

while(num != 1):
    print(f"{int(num)}", end=" ")
    if num % 2 == 0:
        num /= 2
    elif num % 2 == 1:
        num *= 3
        num += 1
    
print(f"{int(num)}")         