rtime=[28,65,97]
kp="gaf"
kplong=kp[0]
maxp=rtime[0]
for i in range(1,len(rtime)):
    time=(rtime[i]-rtime[i-1])
    if time>maxp:
        kplong=kp[i]
        print("1 ")
    elif time == maxp: kplong = max(kplong, kp[i])
    maxDur = max(time, maxp)
print(kplong)
        