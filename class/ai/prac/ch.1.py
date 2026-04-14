#규칙기반~기계학습,딥러닝
'''
<c>
int a[5]={2,3,1,5,4}
int b[5]={1,2,6,5,7}
int c[5];
for(int i=0;i<5;i++)
    c[i]=a[i]+b[i];
'''

import numpy as np

a=np.array([2,3,1,5,4])
b=np.array([1,2,6,5,7])
c=a+b
print(c)