[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix3](../../VECMATMatrix3.md)

# VECMATMatrix3CreateMatrix(\_,\_,\_,\_,\_,\_,\_,\_,\_,\_)
Set the matrix with the given values.

## **Declaration**
```C
void VECMATMatrix3CreateMatrix(
		VECMATMatrix3 m,
		float m00,
		float m01,
		float m02,
		float m10,
		float m11,
		float m12,
		float m20,
		float m21,
		float m22,
	)
```


## **Parameters**
**m**  
A 3x3 matrix.

**m00**  
The value found at the first line first column.

**m01**  
The value found at the first line second column.

**m02**  
The value found at the first line third column.

**m10**  
The value found at the second line first column.

**m11**  
The value found at the second line second column.

**m12**  
The value found at the second line third column.

**m20**  
The value found at the third line first column.

**m21**  
The value found at the third line second column.

**m22**  
The value found at the third line third column.


## **Result**
The 3x3 matrix `m` set with the given parameters.
