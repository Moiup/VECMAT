[Main menu](../../../Readme.md)->[Doc](../../VECMATKit.md)->[VECMATGlkit](../VECMATGlkit.md)

# VECMATMatrix4ProjectionFrustum(\_,\_,\_,\_,\_,\_,\_)
Create the 4x4 orthographic projection matrix.

## **Declaration**
```C
void VECMATMatrix4ProjectionFrustum(
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
[info](https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/glFrustum.xml)

**left**  
Coordinate of the left vertical clipping plane.

**right**  
Coordinate of the right vertical clipping plane.

**bottom**  
Coordinate of the bottom horizontal clipping plane.

**top**  
Coordinate of the top horizontal clipping plane.

**nearZ**  
Distance of the nearer depth clipping plane. (positive value)

**farZ**  
Distance of the farther depth clipping plane. (positive value)

**projection**  
A 4x4 matrix.

## **Result**
The 4x4 frustum projection matrix in `projection`
