##### Rules summary from Monday
$\displaystyle\int kdx=kx+C$
$\displaystyle\int x^ndx=\frac{x^{n+1}}{n+1}+C,n\ne-1$
$\displaystyle\int\frac{1}{x}dx=ln|x|+C$
$\displaystyle\int e^xdx=e^x+C$
$\displaystyle\int\sin{x}dx=-\cos{x}+C$
$\displaystyle\int\cos{x}dx=\sin{x}+C$

# 6.2

`holy shit hokora put the image here please im going to explode D:`


$f(x)=x^2+4x-1$
$g(x)=x^2-4x+5$
$\displaystyle A=\int_{1}^{3}{-x^2+4x-1-(x^2-4x+5)}dx$
$\displaystyle=\int_{1}^{3}{-2x^2+8x-6}dx=F(3)-F(1)$ where $F'=f$
$\displaystyle\int-2x^2+7x-6dx=-2\left(\frac{x'}{3}\right)+8\left(\frac{x^2}{2}\right)-6x+C$
$\displaystyle\left(\frac{x^3}{3}\right)'=\left(\frac{3x^2}{3}\right)'$
$=x^2$
$\displaystyle=\frac{2}{3}x^3+4x^2-6x+C$

Check: $\left(-\frac{2}{3}x^3+4x^2-6x+C\right)''$
$\displaystyle=-\frac{2}{3}\left(3x^2\right)+4(2x)-6+0$
$-2x^2+8x-6$

$\displaystyle=\left(-2*\left(\frac{3^3}{3}\right)+4(3)^2-6(3)\right)-\left(-\frac{2}{3}(1)^3+4(1)^2-6(1)\right)$
$\displaystyle=\left(-18+36-18\right)-\left(-\frac{2}{3}+4-6\right)$
$\displaystyle=+\left(+\frac{2}{3}+2\right)=2\frac{2}{3}$

##### Theorem: Properties of Antiderivatives
1) $\displaystyle\int f(x)\pm g(x)dx=\int f(x)dx\pm\int g(x)dx$
2) $\displaystyle\int cf(x)dx=c\int f(x)dx$

FTC: If $F'=f$ then $\displaystyle\int_{a}^{b}{f(x)}dx=F(b)-F(a)$

Recall: $\displaystyle\int_{a}^{b}{f(x)}dx==F(b)-F(a)$
$=F(x)\biggr|_{a}^{b}$

###### Ex:
$\displaystyle\int_{1}^{2}3x^3dx=3\left(\frac{x^3}{3}\right)\Biggr|_{1}^{2}=x^3\biggr|_{1}^{2}$
$=2^3-1^3=8-1=7$
$\displaystyle\int_{1}^{2}3x^2dx=x^3+C\biggr|_{1}^{2}$
$=2^3+C-\left(1^3+C\right)$
$=8+C-1-C$
$=8-1=\fbox{7}$

$\left(\dfrac{1}{\sin^2{\Theta}}\right)''$
$\left(\csc^2{\Theta}\right)''$
$=2\csc{\Theta}(\csc{\Theta})'$
$=2\csc{\Theta}(-\csc{\Theta}\cot{\Theta})'$
$=\displaystyle2\frac{1}{\sin{\Theta}}*\frac{1}{\sin{\Theta}}*\frac{\cos{\Theta}}{\sin{\Theta}}$
$\displaystyle=\frac{-2\cos{\Theta}}{\sin^3{\Theta}}$

$\displaystyle\int_{0}^{\frac{\pi}{4}}{\frac{1}{\cos^2{}\Theta}d\Theta}=\int_{0}^{\frac{\pi}{4}}{\sec^2{\Theta}d\Theta}=\tan{\Theta}\biggr|_{0}^{\frac{\pi}{4}}=\tan{\frac{\pi}{4}}-\tan{0}=1-0=\fbox{1}$

$\left(\frac{1}{t^2}\right)'=\left(t^{-2}\right)'$
$=2t^{-3}$
$=-\dfrac{2}{t^3}$

###### Ex:
$\displaystyle\int_{1}^{e}{\frac{3}{t}-\frac{1}{t^2}}dt=\int_{1}^{e}{3*\frac{1}{t}-t^{-2}}dt$
$=3\ln{|t|}+\dfrac{t^{-1}}{+1}\Biggr|_{1}^{e}$
$=3\ln{|t|}+\dfrac{1}{t}\biggr|_{1}^{e}$
$\displaystyle=3\ln{e^1}+\frac{1}{e}-\left(3\ln{\frac{e^0}{1}}+\frac{1}{1}\right)$
$\displaystyle=3(1)+\frac{1}{e}-\left(\cancel{3(0)}+1\right)$
$\displaystyle=3+\frac{1}{e}-1$
$\displaystyle=2+\frac{1}{e}$

###### Ex: 





# 6.4 Sound Fundamental Theorem of Calculus

We say $f$ is an elementary function if it can be written using sums, products, roots, scaling, and compositions (function in function) of finitely many polynomial, trigonometric, and inverse trigonometric, exponential, and logarithmic functions. 

###### Examples of elementary functions:
$\displaystyle\frac{3}{t}-\frac{1}{t^2}$
$2x^2+4x-7$
$\sqrt{x^3}$
$\displaystyle\frac{e^{x^2}}{\tan{(\ln{x})}}$
$\pi\arcsin{\left(\sqrt[4]{e^{-\sin{x}}+1}\right)}$
We are actually very lucky if we can find an antiderivative $F$ of $f$ which is also an elementary function

$\displaystyle\int{2t}dt=t^2+C$
Q: What about $\displaystyle\int{e^{-t^2}}dt$?

`hokora please put the fuckin image here oh my god im gonna explod`


Q: Is $\DeclareMathOperator\erf{erf}\erf{(x)}$ an elementary function? ($\erf$ is error function)
A: No: proven by Liouville in 1835.

Let's say $\erf{(x)}$ does exist.
$\displaystyle\erf{(b)}-\erf{(a)}=\int_{a}^{b}e^{-t^2}dt$
$\displaystyle\erf{(x)}-\erf{(0)}=\int_{0}^{x}{e^{-t^2}}dt$
$\displaystyle\erf(x)=\int_{0}^{x}{e^{-t^2}}dt$

## Thm: Sound Fundamentals Theorem of Calculus
(Construction Thm for Antiderivatives)
If $f$ is a continuous function on an interval, and $a$ is any number in that interval, then the function $F$ defined on that interval as $F(x)=\int_{a}^{x}{f(t)}dt$ is an antiderivative of $f$.

$\displaystyle F'(x)=\frac{d}{dx}{\left(\int_{a}^{x}{f(t)}dt\right)}=f(x)$

`Let's do a more "informal" way to prove it`

`hokoraput the fUCKING image!!!!!!!!`

"Proof": We want to show $F'(x)=f(x)$.
$\displaystyle F'(x)=\lim_{h\rightarrow0}{\frac{F(x+h)-F(x)}{h}}$
Let's break apart what this means!
$\displaystyle F(x+h)=\int_{a}^{x+h}{f(t)}dt$
$\displaystyle F(x)=\int_{a}^{x}{f(t)}dt$
$\displaystyle F(x+h)-F(x)=\int_{a}^{x+h}{f(t)}dt-\int_{a}^{x}{f(t)dt}$
$\displaystyle=\int_{x}^{x+h}{f(t)}dt\underset{\underset{\text{as }h\rightarrow0}{\uparrow}}{\approx}\underbrace{f(x)h}_{\underset{\text{rectangle}}{\text{Area of}}}$
$\displaystyle F'(x)=\lim_{h\rightarrow0}{\frac{F(x+h)-F(x)}{h}}$
$\displaystyle\approx\lim_{h\rightarrow0}{\frac{f(x)\cancel{h}}{\cancel{h}}}=f(x)$


##### Proof of 1st FTC using 2nd FTC
Let $F(x)=\int_{a}^{x}{f(t)}dt$. So let $G$ be any antiderivative of $f$. So $G'=f$.
But $F'=f\Rightarrow F'=G'\Rightarrow F'-G'=0\Rightarrow(F-G)'=0\Rightarrow F(x)=G(x)+C$

Note $\displaystyle F(a)=\int_{a}^{a}{f(t)}dt=0$
$\displaystyle\int_{a}^{b}{f(t)}dt=F(b)$
$=F(b)-F(a)$
$=G(b)+C-\left(G(a)+C\right)$
$=G(b)-G(a)$
So for any antiderivative $G$, $\int_{a}^{b}{f(t)}ft=G(b)-G(a)$.

###### Ex:
$\displaystyle\erf{(x)}=\int_{0}^{x}{e^{-t^2}}dt$
$\displaystyle\frac{d}{dx}\left(\erf{(x)}\right)=e^{-x^2}$
$\displaystyle\frac{d}{dx}\int_{3}^{x}{t^2+3}dt=x^2+3$
$\displaystyle\frac{d}{dx}\int_{-\pi}^{x}{\sin{t}}dt=\sin{x}$

$F(x)=\int_{a}^{x}{f(t)}dt$ is an antiderivative of $f$.
$\displaystyle\frac{d}{dx}\int_{a}^{x}{f(t)}dt=f(x)$

$\displaystyle\frac{d}{dx}(x\erf{(x)})=\frac{d}{dx}(x)\erf{(x)}+x\frac{d}{dx}(\erf{(x)})$
$=\erf(x)+xe^{-x^2}$
$\displaystyle\frac{d}{dx}\int_{0}^{x^2}{\cos{t}}dt$
$\displaystyle\frac{d}{du}\int_{0}^{u}{\cos{t}}dt=\cos{u}$
$\displaystyle u=x^2\Rightarrow\frac{dy}{dx}=2x$
$\displaystyle\frac{d}{dx}\int_{0}^{u}{\cos{t}}dt$
$\displaystyle=\frac{d}{du}\left(\int_{0}^{u}{\cos{t}}dt\right)\frac{dy}{dx}$
$=\cos{u}(2x)$
$=2x\cos{\left(x^2\right)}$
$u=x^2$
$\displaystyle\frac{d}{dx}\left(e^{x^2}\right)=\frac{d}{dx}\left(e^u\right)$
$=\frac{d}{du}\left(e^u\right)\frac{dy}{dx}$
$=e^u(2x)$
$e^{x^2}(2x)$


##### Power rule
$\displaystyle\frac{d}{dx}\left(x*e^x\right)$
$\displaystyle=\frac{d}{dx}(x)e^x+x\frac{d}{dx}(e^x)$
$=e^x+xe^x$
