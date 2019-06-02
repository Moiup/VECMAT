[Main menu](../../../../Readme.md)->[Doc](../../../VECMATKit.md)->[VECMATMatrix](../../VECMATMatrix.md)->[VECMATMatrix4](../../VECMATMatrix4.md)

# VECMATMatrix4CreateMatrix(\_,\_,\_,\_,\_,\_,\_,\_,\_,\_,\_,\_,\_,\_,\_,\_,\_)
Set the matrix with the given values.

## **Declaration**
```C
void VECMATMatrix4CreateMatrix(
		VECMATMatrix4 m,
		float m00,
		float m01,
		float m02,
		float m03,
		float m10,
		float m11,
		float m12,
		float m13,
		float m20,
		float m21,
		float m22,
		float m23,
		float m30,
		float m31,
		float m32,
		float m33
	)
```


## **Parameters**
**m**  
A 4x4 matrix.

**m00**  
The value found at the first line first column.

**m01**  
The value found at the first line second column.

**m02**  
The value found at the first line third column.

**m03**  
The value found at the first line fourth column.

**m10**  
The value found at the second line first column.

**m11**  
The value found at the second line second column.

**m12**  
The value found at the second line third column.

**m13**  
The value found at the second line fourth column.

**m20**  
The value found at the third line first column.

**m21**  
The value found at the third line second column.

**m22**  
The value found at the third line third column.

**m23**  
The value found at the third line fourth column.

**m30**  
The value found at the fourth line first column.

**m31**  
The value found at the fourth line second column.

**m32**  
The value found at the fourth line third column.

**m33**  
The value found at the fourth line fourth column.


## **Result**
The 4x4 matrix `m` set with the given parameters.
