# **VECMATVector 2**
### Menu
* [Main menu](../../Readme.md) : Back to the main menu
* [Doc](../VECMATKit.md) : Back to the doc title page
* [VECMATVector](VECMATVector.md) : Back to the VECMATVector page

## **Type**

```C
VECMATVector2
```
A vector of size 2.
_____________
## **Creation**

```C
void VECMATVector2Zero(VECMATVector2);
```
Set all values of the vector to 0.

```C
void VECMATVector2Define(VECMATVector2, float, float);
```
Set the vector with the given value.

```C
void VECMATVector2Create(float, float, float, float, VECMATVector2);
```
Create a vector with the coordinates of the two given points.

```C
void VECMATVector2CreateNormalized(float, float, float, float, VECMATVector2);
```
Create a normalized vector with the coordinates of the two given points.

________________
## **Calculus**

```C
void VECMATVector2Normalize(VECMATVector2);
````
Normalize the vector.

```C
float VECMATVector2Length(VECMATVector2);
```
Return the length of the vector.

```C
void VECMATVector2Sum(VECMATVector2, VECMATVector2, VECMATVector2)
```
Do the sum of two vectors.

```C
void VECMATVector2Sub(VECMATVector2, VECMATVector2, VECMATVector2)
```
Do the substraction of two vectors.

```C
void VECMATVector2ScalarSum(VECMATVector2, VECMATVector2, float)
```
Add a scalar to a vector

```C
void VECMATVector2ScalarSub(VECMATVector2, VECMATVector2, float)
```
Substract a scalar to a vector.

```C
void VECMATVector2ScalarMult(VECMATVector2, VECMATVector2, float)
````
Multiply a vector by a scalar.

```C
void VECMATVector2ScalarDivide(VECMATVector2, VECMATVector2, float)
```
Divide a vector by a scalar.
