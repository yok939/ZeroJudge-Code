import datetime
while True:
    try:
        a=[int(i) for i in input().split()]
        da=datetime.datetime(a[0],a[1],a[2])
        b=[int(i) for i in input().split()]
        db=datetime.datetime(b[0],b[1],b[2])
        print(abs((da-db).days))
    except:
        break