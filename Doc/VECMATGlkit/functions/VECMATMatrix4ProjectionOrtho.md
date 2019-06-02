[Main menu](../../../Readme.md)->[Doc](../../VECMATKit.md)->[VECMATGlkit](../VECMATGlkit.md)

# VECMATMatrix4ProjectionOrtho(\_,\_,\_,\_,\_,\_,\_)
Create the 4x4 orthographic projection matrix.

## **Declaration**
```C
void VECMATMatrix4ProjectionOrtho(
		float left,
		float right,
		float bottom,
		float top,
		float nearZ,
		float farZ,
		VECMATMatrix4 projection
	)
```


## **Parameters**
**left**  
Coordinate of the left vertical clipping plane.

**right**  
Coordinate of the right vertical clipping plane.

**bottom**  
Coordinate of the bottom horizontal clipping plane.

**top**  
Coordinate of the top horizontal clipping plane.

**projection**  
A 4x4 matrix.

## **Result**
The 4x4 orhtographic projection matrix in `projection`
