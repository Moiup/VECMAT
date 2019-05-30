[Main menu](../../Readme.md)->[Doc](../VECMATKit.md)->[VECMATVector](VECMATVector.md)

# **VECMATVector 4**
## **Type**

```C
VECMATVector4
```
Vector of size 4. Has four coordinates : _x_, _y_, _z_ and _w_.
_____________
## **Creation**

```C
void VECMATVector4Zero(VECMATVector4)
```
Set all values of the vector to 0. [More here.](./functions/VECMATVector4/VECMATVector4Zero.md)

```C
void VECMATVector4Define(VECMATVector2, float, float, float, float)
```
Set the vector with the given value. [More here.](./functions/VECMATVector4/VECMATVector4Define.md)

```C
void VECMATVector4Create(float, float, float, float, float, float, VECMATVector2)
```
Create a vector with the coordinates of the two given points. [More here.](./functions/VECMATVector4/VECMATVector4Create.md)

```C
void VECMATVector4CreateNormalized(float, float, float, float, float, float, VECMATVector2)
```
Create a normalized vector with the coordinates of the two given points. [More here.](./functions/VECMATVector4/VECMATVector4CreateNormalized.md)

________________
## **Calculus**


```C
void VECMATVector4Normalize(VECMATVector2)
````
Normalize the vector. [More here.](./functions/VECMATVector4/VECMATVector4Normalize.md)

```C
float VECMATVector4Length(VECMATVector2)
```
Return the length of the vector. [More here.](./functions/VECMATVector4/VECMATVector4Length.md)


```C
void VECMATVector4CrossProduct(VECMATVector4, VECMATVector4, VECMATVector4)
```
Do the cross product of two vectors. [More here.](./functions/VECMATVector4/VECMATVector4CrossProduct.md)


```C
void VECMATVector4Sum(VECMATVector2, VECMATVector2, VECMATVector2)
```
Do the sum of two vectors. [More here.](./functions/VECMATVector4/VECMATVector4Sum.md)

```C
void VECMATVector4Sub(VECMATVector2, VECMATVector2, VECMATVector2)
```
Do the substraction of two vectors. [More here.](./functions/VECMATVector4/VECMATVector4Sub.md)

```C
void VECMATVector2ScalarSum(VECMATVector2, VECMATVector2, float)
```
Add a scalar to a vector. [More here.](./functions/VECMATVector4/VECMATVector4ScalarSum.md)

```C
void VECMATVector4ScalarSub(VECMATVector2, VECMATVector2, float)
```
Substract a scalar to a vector. [More here.](./functions/VECMATVector4/VECMATVector4ScalarSub.md)

```C
void VECMATVector4ScalarMult(VECMATVector2, VECMATVector2, float)
````
Multiply a vector by a scalar. [More here.](./functions/VECMATVector4/VECMATVector4ScalarMult.md)

```C
void VECMATVector4ScalarDivide(VECMATVector2, VECMATVector2, float)
```
Divide a vector by a scalar. [More here.](./functions/VECMATVector4/VECMATVector4ScalarDivide.md)
