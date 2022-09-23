# Math 2210 - Calculus 1 Midterm 1 - In Class Z. Reid - James Wibowo
###### Instructions: Find the integrals. Please read and answer each problem carefully. Make sure to write legibly and box, circle, or highlight your answer in order to receive full credit. Remember, the correct answer only with no work to support it is worth ONLY 1 POINT. Each problem answered with reasonable work shown is worth up to 50 points. Good luck!

### For numbers 1 – 4, find the derivatives of the following functions using the ***Limit Process.***

Note: Limit Process: $$f'(x)=\lim_{h\rightarrow0}\frac{f(x+h)-f(x)}{h}$$

#### **1.** $$f(x)=\frac{2}{x-2}$$
$$f(x)=\frac{2}{x-2}\Rightarrow f(x+h)=\frac{2}{(x+h)-2}\Rightarrow f'(x)=\lim_{h\rightarrow0}\frac{(\frac{2}{x+h-2})-(\frac{2}{x-2})}{h}\Downarrow$$
$$f'(x)=\lim_{h\rightarrow0}\frac{-2(1+0)}{(x-2)^2}\Rightarrow \boxed{f'(x)=\lim_{h\rightarrow0}-\frac{2}{(x-2)^2}}$$


#### **2.** $$f(x)=\sqrt{x-5}$$
$$f(x)=\sqrt{x-5}\Rightarrow f(x+h)=\sqrt{x+h-5}\Rightarrow f'(x)=\lim_{h\rightarrow0}\frac{(\sqrt{x+h-5})-(\sqrt{x-5})}{h}\Downarrow$$
$$\lim_{h\rightarrow0}\Rightarrow\boxed{f'(x)=\frac{1}{2\sqrt{x-5}}}$$

#### **3.** $$f(x)=3\cos{x}$$
$$f(x)=3\cos{(x)}\Rightarrow f(x+h)=3\cos{(x+h)}\Rightarrow\lim_{h\rightarrow0}\frac{(3\cos{(x+h)})-(3\cos{(x)})}{h}\Downarrow$$
$$\lim_{h\rightarrow0}\frac{2[(\cos{x}*\cos{h})-(\sin{x}*\sin{h})]-3\cos x}{h}\Rightarrow\lim_{h\rightarrow0}\frac{3\cos{x}[\cos{h}-3\sin{x}\sin{h}-1]}{h}\Downarrow$$
	$$\lim_{h\rightarrow0}\frac{\cancel{3\cos{x}}[\cancel{\cos{h}}-3\sin{x}\cancel{\sin{h}-1}]}{\cancel{h}}\Rightarrow\boxed{-3\sin{x}}$$
#### **4.** $$f(x)=\frac{x^3-8}{x-2}\textrm{, }x\ne2$$
$$f(x)=\frac{x^3-8}{x-2}\Rightarrow f(x+h)\frac{(x+h)^3-8}{x+h-2}\Rightarrow f'(x)=\lim_{h\rightarrow0}\frac{(\frac{x^3-8}{x-2})-(\frac{x^3-8}{x-2})}{h}$$
$$\frac{  
3x^2+0)(x−2)−(x^3−8)(1+0)}{(x-2)^2}\Rightarrow\frac{-x^3+3\left(x-2\right)x^2+8}{\left(x-2\right)^2}\Rightarrow\frac{3x^2}{x-2}-\frac{x^3-8}{\left(x-2\right)^2}\Rightarrow\boxed{f'(x)=2x+2}$$
#### **5.** In your own words, explain your understanding of the derivative of a function. Such as:
##### (a) Is the derivative of a function of x also a function of x?
Yes.
##### (b) If it is, what type of function is it to the original function?
It is a polynomial with one less leading power from the original function. Could also use the limit process $f'(x)=\lim_{h\rightarrow0}\frac{f(x+h)-f(x)}{h}$
##### (c) The derivative function can also be used to determine what?
The derivative function is used to determine the rate of change of movement in the original function. *ie: acceleration stating the rate of chance of velocity*