#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OEIJiraView.EJiraViewIssuePriority
	 */
	enum class EJiraViewIssuePriority : uint8_t
	{
		A1  = 0,
		A2  = 1,
		A3  = 2,
		B   = 3,
		C   = 4,
		D   = 5,
		MAX = 6
	};

	/**
	 * Enum OEIJiraView.EJiraViewIssueType
	 */
	enum class EJiraViewIssueType : uint8_t
	{
		Task = 0,
		Bug  = 1,
		MAX  = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
