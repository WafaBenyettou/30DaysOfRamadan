k = input("how many income ")
for i in range (1,int(k)):
    X = input("enter your income ")
    Y = input("what's The amount above which you will have to pay taxes ")
    T1 = int(X) - int(Y)
    T2 =int(X) - int(Y) + T1

    if int(X) > int(Y):

        print("you need to invest at least " + str(T1))
    else:
        print("you don't need to invest")

print("the amount invested after " + str(k) + "incomes , is " + str(T2))