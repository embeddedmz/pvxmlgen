#ifndef INC_4DVIEWER_VTK4DVIEWER_HPP
#define INC_4DVIEWER_VTK4DVIEWER_HPP

#include <vtkAlgorithm.h>

/** @pv_plugin{sources} 
 *  @pv_attr{label, Minimal Filter Example} 
 */
class vtkMinimal : public vtkAlgorithm {
public:
	vtkSetMacro(MemberA, int);
	vtkSetMacro(MemberB, int);

protected:
	class ForwardClass;

	/** @pv_member 
	 *  @pv_attr{label, A}
	 */
	int MemberA = 1;

	/** @pv_member */
	int MemberB {2};

	/** @pv_member */
	int MemberC[2] {1,2};

	/** @pv_member */
	int MemberD[2] = {3,4};
};

#endif