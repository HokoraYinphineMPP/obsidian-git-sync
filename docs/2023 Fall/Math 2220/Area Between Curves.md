# 5.4 Area between Curves

$f(x)=-x^2+4x-1$
$g(x)=x^2-4x+5$

$\int_{a}^{b}{f(x)dx}-\int_{a}^{b}{g(x)dx}$
Area between $f$ and $g$ for $a\le x\le b$ : $\int_{a}^{b}{f(x)-g(x)dx}$
assuming $f(x)\le g(x)$ for $a\le x\le b$

`hokora holy shit put your graph here please`

in this picture, brown area = $\int_{a}^{b}{(-x^2+4x-1)-x^2-4x+5}dx$
to find $a$ and $b$, set $f(x)=g(x)$

$\cancel{-x^2}+\cancel{4x}-1=x^2-4x+5$
$+\cancel{x^2}-\cancel{4x}+1+x^2-4x+1$
$0=2x^2-8x+6$
$0=2(x^2-4x+3)$
$0=2(x-3)(x-1)$
$x=3,1$
$\text{Area}=\int_{1}^{3}{(-x^2+4x-1)-(x^2-4x+5)}dx$
$=\int_{1}^{3}{-2x^2+8x-6}dx$

# 6.1 Antiderivates Graphically and Numerically
If $F'=f$, we call $F$ an antiderivative of $f$.
###### Ex:
Since $\frac{d}{dx}(x^2)=2x$, we say $x^2$ is an antiderivative of $2x$.

$\frac{d}{dx}(C)=0$  So any $C$ is an antiderivative of $0$

$\frac{d}{dx}(x^2+6)=2x$  so $x^2+6$ is an antiderivative of $2x$

In fact, $x^2+C$ is an antiderivative of $2x$ for any constant $C$.
We say that $2x$ has a family of antiderivatives.

Recall the FTC:
$\int_{a}^{b}{f(x)dx}=F(b)-F(a)$ (where $F'=f$)
$\Rightarrow F(b)=F(a)+\int_{a}^{b}{F'(x)dx}$

###### Ex:
The graph of $f'F is given below. Sketch the graph of $f$ given $f(0)=0

`hokora holy shit put your graph here please`

$f$ is increasing when $f'>0$
$f$ is decreasing when $f'<0$
$f$ is concave up when $f''>0$ when $f'$ increasing
$f$ is concave down when $f''<0$ when $f'$ decreasing

`hokora holy shit put your graph here please`

$f(4)=f(3)+\int_{3}^{4}{f'(x)dx}$
$f(4)=3+\frac{1}{2}(1)(1)=3.5$


$f(5)=f(4)+\int_{4}^{5}{f'(x)dx}$ | $f(5)=f(3)+\int_{3}^{5}{f(x)dx}$
$=3.5-\frac{1}{2}(1)(1)$ | $=3+0=3$
$=3$ |
-|-
$f(4)=f(3)+\int_{3}^{4}{f'(x)dx}$
$=4+\frac{1}{2}=4.5$

###### Ex:
Suppose $f'$ is graphed below and $f(0)=100$.
Find local min's/max's, inflections where $f$ is inc/dec, where $f$ is concave up/down, and graph $f$.

`hokora holy shit put your graph here please`


$f$ local min: $f$ switches from dec to inc = $f'$ switches from negative to positive
$f$ local max: $f$ switches from inc to dec = $f'$ switches from positive to negative
$f$ inflection: $f$ switches concavity = $f'$ switches between increasing and decreasing

in the case of the graph above:
min's : $x=0,30$
max's : $x=20$
inflection pts: $x=10,25$

inc: $(0,20)\cup(30,35)$
dec: $(20,30)$
concave up: $(0,10)\cup(25,35)$
concave down: $(10,25)$


$f(0)=100$
$f(10)=f(0)+\int_{0}^{10}{f'(x)dx}$
$=100+\frac{1}{2}(10)(20)= 100+100=200$
$f(20)=f(10)+\int_{10}^{20}{f'(x)dx}$
$=200+100=300$
$f(25)={f(20)}+\int_{20}^{25}{f'(x)dx}$
$=300-\frac{1}{2}(5)(10)$
$=300-25=275$
$f(20)=f(25)+\int_{25}^{30}{f'(x)dx}$
$=275-25=250$
$f(35)=f(30)+\int_{30}^{35}{f'(x)dx}$
$=250+25=275$


`hokora holy shit put your graph here please`


# 6.2 Constructing Antiderivatives Analytically

If $F'(x)=0$ on an interval, then $F(x)=C$ for some constant $C$ on that interval.

What is the more general antiderivative of $f$?
Suppose $F$ and $G$ are antiderivatives of $f$.
$F'=f$ and $G'=f$
$G'=F'$
$\underline{-F'-F'}$
$G'-F'=0$
$(G-F)'=0$
$G-F=C$ for some constant $C$.
$\Rightarrow G(x)=F(x)+C$

If $F$ and $G$ are both antiderivatives of $f$, then $G(x)=F(x)+C$ for some constant $C$.

Therefore, if $F$ is an antiderivative of $f$, then, every antiderivative of $f$ is of form $F(x)+C$

#### Definition
We let $\int f(x)dx=F(x)+C$
the family of all antiderivatives of $f$, we call this the indefinite integral of $f$.

$\int f(x)dx$ : family of functions
$\int_{a}^{b}{f(x)dx}$ : number representing a signed area `(signed area meaning area on top minus area on bottom!)`

###### Ex:
$x^2$ is an antiderivative of $2x$, so $\int 2xdx = x^2+C$

#### If $k$ is a constant, $\int kdk=kx+C$

ie: $\int 2dx=2x+C\Rightarrow(2x+C)'=2+0=2$

### Power functions
$\frac{d}{dx}(x^2)=2x\Rightarrow\frac{d}{dx}(\frac{x^2}{2})=x$
$\frac{d}{dx}(x^3)=3x^2\Rightarrow\frac{d}{dx}(\frac{x^3}{3})=x$
$\frac{d}{dx}(x^4)=4x^3\Rightarrow\frac{d}{dx}(\frac{x^4}{4})=x$
$\vdots=\vdots\Rightarrow\vdots=\vdots$
$\frac{d}{dx}(x^{n+1})=(n+1)x^n\Rightarrow\frac{d}{dx}(\frac{x^{n+1}}{n+1})=x$

$\int x^ndx=\frac{x^{n+1}}{n+1}+C,n\ne-1$
If $n=-1$, $x^-1=\frac{1}{x}$
$\frac{d}{dx}(\ln{x})=\frac{1}{x},x>0$
$\frac{d}{dx}(\ln{|1|})=\frac{1}{x}$

$\int\frac{a}{x}dx=\ln{|x|}+C$


$\int e^xdx=e^x+C$

$\frac{d}{dx}(\sin{x})=\cos{x}$
$\frac{d}{dx}(\cos{x})=-\sin{x}$

$\int\cos{x}dx=\sin{x}+C$
$\int\sin{x}dx=-\cos{x}+C$

$\int 3x+x^2dx=3(\frac{x^2}{2})+\frac{x^3}{3}+C$
$=\frac{3}{2}x^2+\frac{x^3}{3}+C$
