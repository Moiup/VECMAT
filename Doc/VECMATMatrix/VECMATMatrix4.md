[Main menu](../../Readme.md)->[Doc](../VECMATKit.md)->[VECMATMatrix](VECMATMatrix.md)

# **VECMATMatrix4**
## **Type**

```C
VECMATMatrix4
```
Square matrix of size 4.
_____________
## **Creation**

```C
void VECMATMatrix4CreateMatrix(VECMATMatrix4, float, float, float , float, float, float, float, float, float, float, float, float, float, float, float, float)
```
Set the matrix with the given values. [More here.](./functions/VECMATMatrix4/VECMATMatrix4CreateMatrix.md)

```C
void VECMATMatrix4Zero(VECMATMatrix4)
```
Set all values of the matrix to 0. [More here.](./functions/VECMATMatrix4/VECMATMatrix4Zero.md)

```C
void VECMATMatrix4Identity(VECMATMatrix4, float)
```
Set the matrix as an identity matrix. [More here.](./functions/VECMATMatrix4/VECMATMatrix4Identity.md)

## **Calculus**
```C
void VECMATMatrix4Sum(VECMATMatrix4, VECMATMatrix4, VECMATMatrix4)
```
Do the sum of two matrices. [More here.](./functions/VECMATMatrix4/VECMATMatrix4Sum.md)

```C
void VECMATMatrix4Sub(VECMATMatrix4, VECMATMatrix4, VECMATMatrix4)
```
Do the substraction of two matrix. [More here.](./functions/VECMATMatrix4/VECMATMatrix4Sub.md)

```C
void VECMATMatrix4Mult(VECMATMatrix4, VECMATMatrix4, VECMATMatrix4)
```
Do the multiplication of two matrix. [More here.](./functions/VECMATMatrix4/VECMATMatrix4Sub.md)

```C
void VECMATMatrix4ScalarSum(VECMATMatrix4, VECMATMatrix4, float)
```
Add a scalar to a matrix. [More here.](./functions/VECMATMatrix4/VECMATMatrix4ScalarSum.md)

```C
void VECMATMatrix4ScalarSub(VECMATMatrix4, VECMATMatrix4, float)
```
Substract a scalar to a matrix. [More here.](./functions/VECMATVector4/VECMATMatrix4ScalarSub.md)

```C
void VECMATMatrix4ScalarMult(VECMATMatrix4, VECMATMatrix4, float)
```
Multiply a matrix by a scalar. [More here.](./functions/VECMATMatrix4/VECMATMatrix4ScalarMult.md)

```C
void VECMATMatrix4ScalarDivide(VECMATMatrix4, VECMATMatrix4, float)
```
Divide a matrix by a scalar. [More here.](./functions/VECMATMatrix4/VECMATMatrix4ScalarDivide.md)

```C
void VECMATMatrix4VecMult(VECMATMatrix4, VECMATVector4, VECMATVector4)
```
Multiply a matrix with a vector. [More here.](./functions/VECMATMatrix4/VECMATMatrix4VecMult.md)
