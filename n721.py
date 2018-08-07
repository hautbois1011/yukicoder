import datetime as dt
y, m, d = map(int, input().split("/"))
date = dt.date(y, m, d) + dt.timedelta(days=2)
print(date.strftime("%Y/%m/%d"))

