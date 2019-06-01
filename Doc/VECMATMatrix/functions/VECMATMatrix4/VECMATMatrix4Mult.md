[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix4](../../VECMATMatrix4.md)

# VECMATMatrix4Mult(\_,\_,\_)
Do the multiplication of two matrix.

## **Declaration**
```C
void VECMATMatrix4Mult(
		VECMATMatrix4 m1,
		VECMATMatrix4 m2,
		VECMATMatrix4 res
	)
```


## **Parameters**
**m1**  
The 4x4 multiplier matrix.

**m2**  
The 4x4 multiplicand matrix.

**res**  
The resulting 4x4 matrix.


## **Result**
The 4x4 matrix `res` with the result of `m1 * m2`.
