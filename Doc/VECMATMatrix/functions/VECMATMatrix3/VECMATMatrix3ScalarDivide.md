[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix3](../../VECMATMatrix3.md)

# VECMATMatrix3ScalarDivide(\_,\_,\_)
Divide a matrix by a scalar.

## **Declaration**
```C
void VECMATMatrix3ScalarDivide(
		VECMATMatrix3 m,
		VECMATMatrix3 res,
		float r
	)
```


## **Parameters**
**m**  
A 3x3 matrix.

**r**  
The real value that will divide the matrix `m`

**res**  
The resulting 3x3 matrix.


## **Result**
The 3x3 matrix `res` set with the values of `m` divided by `r`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix3ScalarDivide(m, m, r);
```