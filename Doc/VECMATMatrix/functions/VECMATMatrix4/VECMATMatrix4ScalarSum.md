[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix4](../../VECMATMatrix4.md)

# VECMATMatrix4ScalarSum(\_,\_,\_)
Add a scalar to a matrix.

## **Declaration**
```C
void VECMATMatrix4ScalarSum(
		VECMATMatrix4 m,
		VECMATMatrix4 res,
		float r
	)
```


## **Parameters**
**m**  
A 4x4 matrix.

**r**  
The real value that will be added to the matrix `m`

**res**  
The resulting 4x4 matrix.


## **Result**
The 4x4 matrix `res` resulting from the sum of `r` to `m`.

## How to
If you don't want to store the result in a new matrix, call the function like this :

```C
VECMATMatrix4ScalarSum(m, m, r);
```
