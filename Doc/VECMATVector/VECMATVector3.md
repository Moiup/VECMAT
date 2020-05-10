[Main menu](../../Readme.md)->[Doc](../VECMATKit.md)->[VECMATVector](VECMATVector.md)

# **VECMATVector3**
## **Type**

```C
VECMATVector3
```
Vector of size 3. Has three coordinates : _x_, _y_ and _z_.
_____________
## **Creation**

```C
void VECMATVector3Zero(VECMATVector3)
```
Set all values of the vector to 0. [More here.](./functions/VECMATVector3/VECMATVector3Zero.md)

```C
void VECMATVector3Define(VECMATVector3, float, float, float)
```
Set the vector with the given values. [More here.](./functions/VECMATVector3/VECMATVector3Define.md)

```C
void VECMATVector3Create(float, float, float, float, float, float, VECMATVector3)
```
Create a vector with the coordinates of the two given points. [More here.](./functions/VECMATVector3/VECMATVector3Create.md)

```C
void VECMATVector3Copy(VECMATVector3, VECMATVector3)
```
Copy a vector into an other vector. [More here.](./functions/VECMATVector3/VECMATVector3Copy.md)

```C
void VECMATVector3CreateNormalized(float, float, float, float, float, float, VECMATVector3)
```
Create a normalized vector with the coordinates of the two given points. [More here.](./functions/VECMATVector3/VECMATVector3CreateNormalized.md)

________________
## **Calculus**


```C
void VECMATVector3Normalize(VECMATVector3)
````
Normalize the vector. [More here.](./functions/VECMATVector3/VECMATVector3Normalize.md)

```C
float VECMATVector3Length(VECMATVector3)
```
Return the length of the vector. [More here.](./functions/VECMATVector3/VECMATVector3Length.md)

```C
void VECMATVector3CrossProduct(VECMATVector3, VECMATVector3, VECMATVector3)
```
Do the cross product of two vectors. [More here.](./functions/VECMATVector3/VECMATVector3CrossProduct.md)

```C
int VECMATVector3DotProduct(VECMATVector3, VECMATVector3)
```
Do the dot product between two vectors. [More here.](./functions/VECMATVector3/VECMATVector3DotProduct.md)

```C
void VECMATVector3Sum(VECMATVector3, VECMATVector3, VECMATVector3)
```
Do the sum of two vectors. [More here.](./functions/VECMATVector3/VECMATVector3Sum.md)

```C
void VECMATVector3Sub(VECMATVector3, VECMATVector3, VECMATVector3)
```
Do the substraction of two vectors. [More here.](./functions/VECMATVector3/VECMATVector3Sub.md)

```C
void VECMATVector2ScalarSum(VECMATVector3, VECMATVector3, float)
```
Add a scalar to a vector. [More here.](./functions/VECMATVector3/VECMATVector3ScalarSum.md)

```C
void VECMATVector3ScalarSub(VECMATVector3, VECMATVector3, float)
```
Substract a scalar to a vector. [More here.](./functions/VECMATVector3/VECMATVector3ScalarSub.md)

```C
void VECMATVector3ScalarMult(VECMATVector3, VECMATVector3, float)
```
Multiply a vector by a scalar. [More here.](./functions/VECMATVector3/VECMATVector3ScalarMult.md)

```C
void VECMATVector3ScalarDivide(VECMATVector3, VECMATVector3, float)
```
Divide a vector by a scalar. [More here.](./functions/VECMATVector3/VECMATVector3ScalarDivide.md)
