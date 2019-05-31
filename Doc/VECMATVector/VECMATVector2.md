[Main menu](../../Readme.md)->[Doc](../VECMATKit.md)->[VECMATVector](VECMATVector.md)

# **VECMATVector2**
## **Type**

```C
VECMATVector2
```
Vector of size 2. Has two coordinates : _x_ and _y_.
_____________
## **Creation**

```C
void VECMATVector2Zero(VECMATVector2)
```
Set all values of the vector to 0. [More here.](./functions/VECMATVector2/VECMATVector2Zero.md)

```C
void VECMATVector2Define(VECMATVector2, float, float)
```
Set the vector with the given values. [More here.](./functions/VECMATVector2/VECMATVector2Define.md)

```C
void VECMATVector2Create(float, float, float, float, VECMATVector2)
```
Create a vector with the coordinates of the two given points. [More here.](./functions/VECMATVector2/VECMATVector2Create.md)

```C
void VECMATVector2CreateNormalized(float, float, float, float, VECMATVector2)
```
Create a normalized vector with the coordinates of the two given points. [More here.](./functions/VECMATVector2/VECMATVector2CreateNormalized.md)

________________
## **Calculus**


```C
void VECMATVector2Normalize(VECMATVector2)
````
Normalize the vector. [More here.](./functions/VECMATVector2/VECMATVector2Normalize.md)

```C
float VECMATVector2Length(VECMATVector2)
```
Return the length of the vector. [More here.](./functions/VECMATVector2/VECMATVector2Length.md)

```C
void VECMATVector2Sum(VECMATVector2, VECMATVector2, VECMATVector2)
```
Do the sum of two vectors. [More here.](./functions/VECMATVector2/VECMATVector2Sum.md)

```C
void VECMATVector2Sub(VECMATVector2, VECMATVector2, VECMATVector2)
```
Do the substraction of two vectors. [More here.](./functions/VECMATVector2/VECMATVector2Sub.md)

```C
void VECMATVector2ScalarSum(VECMATVector2, VECMATVector2, float)
```
Add a scalar to a vector. [More here.](./functions/VECMATVector2/VECMATVector2ScalarSum.md)

```C
void VECMATVector2ScalarSub(VECMATVector2, VECMATVector2, float)
```
Substract a scalar to a vector. [More here.](./functions/VECMATVector2/VECMATVector2ScalarSub.md)

```C
void VECMATVector2ScalarMult(VECMATVector2, VECMATVector2, float)
````
Multiply a vector by a scalar. [More here.](./functions/VECMATVector2/VECMATVector2ScalarMult.md)

```C
void VECMATVector2ScalarDivide(VECMATVector2, VECMATVector2, float)
```
Divide a vector by a scalar. [More here.](./functions/VECMATVector2/VECMATVector2ScalarDivide.md)
