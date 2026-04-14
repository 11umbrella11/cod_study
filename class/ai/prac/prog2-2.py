import time

start=time.time();
sum=0
for i in range(1,100000001):
    sum=sum+1

end=time.time()
    
print('1+2+...+100000000=',sum)
print('소요시간은 ',end-start,'초 입니다')