# 5.3
## The Fundamental Theorem of Calculus
If $f$ is continuous on the interval $[a,b]$ and $f(t)=F'(t)$ for some function $F$, then $\int_{a}^{b}{f(t)dt}=F(b)-F(a)$

|$\int_{a}^{b}{F'(t)dt}$|$=F(b)-F(a)$|
|-|-|
|(Signed area between rate of change function and $t$-axis from $t=a$ to $t=B$)|Change in F from $t=a$ to $t=b$|

###### Ex.
If $F'(t)=f(t)=$velocity of an object in miles per hour, what are the units of $\int_{a}^{b}{f(t)dt}$ and $F(b)-F(a)$

$\int_{a}^{b}{f(t)dt}\approx \sum_{i}{f(t_1)\Delta t}$
$=(\frac{\text{miles}}{\text{hour}})(\text{hours})=\text{miles}$

F is distance, so it would in miles as well.
Or by FTC, F(b)_F9A)=int_a^b(f(t)dt) so theyre in same units

# 5.4
## Theorems about Definite Integrals
### Thm: Properties of Limits of Integration

If $a$,$b$,$c$ are numbers, and $f$ continuous, then
1) $\int_{b}^{a}{f(x)dx}=-\int_{a}^{b}{f(x)dx}$
2) $\int_{a}^{c}{f(x)dx}+\int_{c}^{b}{f(x)dx}=\int_{a}^{b}{f(x)dx}$

###### ie:
$\int_{a}^{b}{f(x)dx}\approx \sum_{i}{f(x_i)\Delta x}=\sum_{i}{f(x+i)\frac{b-a}{n}}$
$\int_{b}^{a}{f(x)dx}\approx \sum_{i}{f(x_i)\Delta x}=\sum_{i}{f(x+i)\frac{a-b}{n}}$


$f(x)$ is even if $f(-x)=f(x)$ (symmetric with respect to $y$-axis) 
###### ie:
$\cos{(-x)}=\cos{x}$

$f(x)$ is odd if $f(-x)=-f(x)$ (symmetric about the origin) `Hokora: "rotationally 180° symmetric!"`
###### ie:
$\sin{(-x)}=-\sin{(x)}$


If $f$ is even, then $\int_{-a}^{a}{f(x)dx}=2\int_{0}^{a}{f(x)dx}$
If f is odd, then $\int_{-a}^{a}{f(x)dx}=0$

###### ie:
Given
$\int_{0}^{1.25}{cos(x^2)dx}=0.98$
$\int_{0}^{1}{cos(x^2)dx}=0.90$
Find 
a) $\int_{1}^{1.25}{cos(x^2)dx}$

$\int_{1}^{1.25}{cos(x^2)dx}=\int_{0}^{1}{cos(x^2)dx}+\int_{0}^{1.25}{cos(x^2)dx}$
$0.98=0.90+\int_{0}^{1.25}{cos(x^2)dx}$
$0.08=\int_{0}^{1.25}{cos(x^2)dx}$

b) $\int_{-1}^{1}{cos(x^2)dx}=2\int_{0}^{1}{cos(x^2)dx}=2(0.90)=1.80$

c) $\int_{1.25}^{-1}{cos(x^2)dx}=-\int_{-1}^{1.25}{cos(x^2)dx}$
$=-(\int_{-1}^{1}{cos(x^2)dx}+\int_{1}^{1.25}{cos(x^2)dx})$
$=-(1.80)+0.08)=-1.88$

### Thm: Properties of Sums and constant multiples of the Integrand
Let $f$, $g$ be continuous, and $c$ $a$ constant.
$\int_{a}^{b}{f(x)\pm g(x)dx}=\int_{a}^{b}{f(x)dx}\pm\int_{a}^{b}{g(x)dx}$
$\int_{a}^{b}{cf(x)dx}=c\int_{a}^{b}{f(x)dx}$

###### Ex:
Find exact value of
$\int_{0}^{2}{1+3xdx}=\int_{0}^{2}{1dx}+\int_{0}^{2}{3xdx}$
$=\int_{0}^{2}{1dx}+3\int_{0}^{2}{xdx}$
$=(\text{Area of rectangle})+3(\text{Area of triangle})$
$=(2)(1)+3\xcancel{(1/2)}\xcancel{(2)}(2)$
$=2+6=8$
#### Average Value of Function
Average value of $f$ from $a$ to $b$: $\frac{1}{b-a}\int_{a}^{b}{f(x)dx}$

###### ex:
$C(t)$ is daily cost for heating house in dollars per day, $t$ measured in days. time $t=0$ corresponds to Jan 1, 2015

Q: What is $\int_{0}^{90}{C(t)dt}$?
This is total cost in $ to heat house for 1st 90 days of 2015.

Q: What is $\frac{1}{90}\int_{0}^{90}{C(t)dt}$?
Average cost per day to heat home during 1st 90 days of 2015.

