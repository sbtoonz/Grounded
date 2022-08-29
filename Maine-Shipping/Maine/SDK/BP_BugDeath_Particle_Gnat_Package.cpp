/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BugDeath_Particle_Gnat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BugDeath_Particle_Gnat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BugDeath_Particle_Gnat.BP_BugDeath_Particle_Gnat_C");
		return ptr;
	}

}


