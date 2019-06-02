[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix4](../../VECMATMatrix4.md)

# VECMATMatrix4ScalarDivide(\_,\_,\_)
Divide a matrix by a scalar.

## **Declaration**
```C
void VECMATMatrix4ScalarDivide(
		VECMATMatrix4 m,
		VECMATMatrix4 res,
		float r
	)
```


## **Parameters**
**m**  
A 4x4 matrix.

**r**  
The real value that will divide the matrix `m`

**res**  
The resulting 4x4 matrix.


## **Result**
The 4x4 matrix `res` set with the values of `m` divided by `r`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix4ScalarDivide(m, m, r);
```
