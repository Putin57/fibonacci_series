import sys
sys.stdin.reconfigure(line_buffering=True)
num=int(input("Enter your fibonacci number : "))
def fib(n):
	a,b=0,1
	if n==1:print(a)
	else:
		print(a,end=" ")
		print(b,end=" ")
		for i in range(2,n):
			c=a+b
			a=b
			b=c
			print(c,end=" ")
fib(num)
