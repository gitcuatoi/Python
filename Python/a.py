
import time
password = "1"
passw = ""
while passw != password:
    passw = input("Enter your password: ")
    if passw != password:
        print("It's wrong!!\n")
    else:
        print("****--------------------------------------------------***")

for i in range(0,109,10):
    print("\tLoading in progress " + str(i) + "%" )
    time.sleep(0.2)
print("\n\t   Completed!!\n")

with open("data.txt", errors='ignore') as file:
        line = file.read()

for x in line:
    print(x, end = "")
    time.sleep(0.01)