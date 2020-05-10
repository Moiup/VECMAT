[Main menu](../../Readme.md)->[Doc](../VECMATKit.md)->[VECMATMatrix](VECMATMatrix.md)

# **VECMATMatrix3**
## **Type**

```C
VECMATMatrix3
```
Square matrix of size 3.
_____________
## **Creation**

```C
void VECMATMatrix3CreateMatrix(VECMATMatrix3, float, float, float , float, float, float, float, float, float)
```
Set the matrix with the given values. [More here.](./functions/VECMATMatrix3/VECMATMatrix3CreateMatrix.md)

```C
void VECMATMatrix3Zero(VECMATMatrix3)
```
Set all values of the matrix to 0. [More here.](./functions/VECMATMatrix3/VECMATMatrix3Zero.md)


```C
void VECMATMatrix3Identity(VECMATMatrix3)
```
Set the matrix as an identity matrix. [More here.](./functions/VECMATMatrix3/VECMATMatrix3Identity.md)

## **Calculus**
```C
void VECMATMatrix3Sum(VECMATMatrix3, VECMATMatrix3, VECMATMatrix3)
```
Do the sum of two matrices. [More here.](./functions/VECMATMatrix3/VECMATMatrix3Sum.md)

```C
void VECMATMatrix3Sub(VECMATMatrix3, VECMATMatrix3, VECMATMatrix3)
```
Do the substraction of two matrix. [More here.](./functions/VECMATMatrix3/VECMATMatrix3Sub.md)

```C
void VECMATMatrix3Mult(VECMATMatrix3, VECMATMatrix3, VECMATMatrix3)
```
Do the multiplication of two matrix. [More here.](./functions/VECMATMatrix3/VECMATMatrix3Mult.md)

```C
void VECMATMatrix3ScalarSum(VECMATMatrix3, VECMATMatrix3, float)
```
Add a scalar to a matrix. [More here.](./functions/VECMATMatrix3/VECMATMatrix3ScalarSum.md)

```C
void VECMATMatrix3ScalarSub(VECMATMatrix3, VECMATMatrix3, float)
```
Substract a scalar to a matrix. [More here.](./functions/VECMATVector3/VECMATMatrix3ScalarSub.md)

```C
void VECMATMatrix3ScalarMult(VECMATMatrix3, VECMATMatrix3, float)
````
Multiply a matrix by a scalar. [More here.](./functions/VECMATMatrix3/VECMATMatrix3ScalarMult.md)

```C
void VECMATMatrix3ScalarDivide(VECMATMatrix3, VECMATMatrix3, float)
```
Divide a matrix by a scalar. [More here.](./functions/VECMATMatrix3/VECMATMatrix3ScalarDivide.md)

```C
void VECMATMatrix3VecMult(VECMATMatrix3, VECMATVector3, VECMATVector3)
```
Multiply a matrix with a vector. [More here.](./functions/VECMATMatrix3/VECMATMatrix3VecMult.md)
