# Warm up
A high-performance computing cluster is controlled by two servers: compute and file, and the cluster cooling system consists of three units. The cluster admin recieved three diagnostic messages by email:
1. Bad file server, and the first cooling unit;
2. Bad compute server, and the second cooling unit;
3. File server is normal, but bad third cooling unit;

Only one server and no more than one cooling unit are bad
After repair it turned out that each message contained valid information either about the server's operation or about the cooling units' condition, but not simultaneously. Which server and which cooling units did the admin have to repair?

###### Work Process
|fc|123|
|:-:|:-:|
|tf-ttf|2|
|tf-tft|3|
|tf-ftt|123|
|ft-ttf|13|
|ft-tft|12|
|ft-ftt| |

1. Bad file server, and the first cooling unit is good;
2. Bad compute server, and the second cooling unit is good;
3. File server is normal, third cooling unit is good;

###### Answer
he had to fix compute server and 1st cooling unit



|P|Q|P→Q|~P|~P∨Q|
|:-:|:-:|:-:|:-:|:-:|
|t|t|t|f|f|
|t|f|f|f|f|
|f|t|t|t|t|
|f|f|t|t|t|
~(P→Q)=~(~P∨Q)
=(~(~P))∧(~Q)
P∧(~Q)

C→B
If cow, then beans
C→~B=~C∨~B
~B→~C=C→B `contrapositive`
B→C
~C→~B `inverse`
C∧~B=~(~C∨B)
=~(C→B)


# Statements
A __Statement__ is a sentence that is either `True` or `False`
Ex:
|Examples|T/F|
|:-|:-:|
|$p:"5>2"$|True|
|$q:"2>5"$|False|
|$r:"x>2"$|Not a statement|
###### New statement from old
|p q|def|
|:-:|:-:|
|~p|not p|
|p∧q|p and q|
|p∨q|p or q|
ie:
`my shirt is gray but my shorts are not`
`my shirt is gray` = p
`my shorts are gray` = q
`my shorts are not gray` = ~q
`but` = ∧
p∧~q

# Conditional Statements
Def: p→q means:
"if p is TRUE then q is TRUE"
|p|q|p→q|
|:-:|:-:|:-:|
|T|T|T|
|T|F|F|
|F|T|T|
|F|F|T|

ie:
`If I study hard, then I will pass`
`I study hard` = p
`I will pass` = q
if p then q
p→q
`either I don't study hard, or I pass`
`I don't study hard` = ~p
`I pass` = q
`or` = ∨
~p∨q

# Types of Statements
|Type|p→q|
|:-:|:-:|
|Conditional|p→q|
|Converse|q→p|
|Inverse|~p→~q|
|Contrapositive|~q→~p|
|Biconditional|p⇔q|
Note: Conditional and Contrapositive have the same truth value
Note: Converse and Inverse have the same truth value
- ⇔ means: "If and only if" aka "iff"
it means if p is true, then q is true, and vice versa

ie:
`If you study, then you will get a good grade`
`you study` = p
`you will get a good grade` = q
p→q
Converse: `If you get a good grade, then you studied`
Inverse: `If you do not study, then you will not get a good grade`
Contrapositive: `If you did not get a good grade, then you did not study`

