import random
def create_dot():
    x=random.random()
    y=random.random()
    return x,y

def check_dot(x,y):
    if x*x+y*y<1:
        return 1
    else:
        return 0

a=int(input("찍을 점의 개수를 입력하세요: "))
count =0
for i in range(a):
    p,q=create_dot()
    count = count + check_dot(p,q)

print("파이의 값은 다음과 같습니다.", 4*count/a)
