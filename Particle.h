/**
 * "Mistakes are always forgivable, if one has the courage to admit them." -Bruce Lee
 *
 *
 * The data structure for each particle
 * Keep in mind that each particle is simply data that is used to
 * tell the renderer what to draw.
 *
 * These Particles, leaves in the wind.
 *
 * Coded by: Plotner
 * On: December 1, 2015 
 *
 */
//#pragma once
///* API Abstraction */
//#include "PrimeEngine/APIAbstraction/APIAbstractionDefines.h"
//
///* Outer-Engine includes */
//#include <assert.h>
//
///* Inter-Engine includes */
//#include "PrimeEngine/MemoryManagement/Handle.h"
//#include "PrimeEngine/PrimitiveTypes/PrimitiveTypes.h"
//#include "PrimeEngine/Events/Component.h"
////#include "PrimeEngine/Utils/Array/Array.h"
//#include "PrimeEngine/Math/Vector4.h"
//#include "PrimeEngine/Math/Matrix4x4.h"
//
///* particle specific includes */
//#include "Particle.h"
//#include "ParticleHelper.h"
//
///* Sibling/Children includes */
#pragma once

#include "PrimeEngine/Math/Vector4.h"
#include "PrimeEngine/PrimitiveTypes/PrimitiveTypes.h"

namespace PE
{
namespace Components
{
	/** basic data struct for Particles */
	struct Particle
	{
		//PrimitiveTypes::Int32	UVAnimationCycles;	/** number of uv animation cycles */
		//PrimitiveTypes::Int32	UVNumXTiles;		/** number of horizontal tiles in the mesh texture */
		//PrimitiveTypes::Int32	UVNumYTiles;		/** number of vertical tiles in the mesh texture */
		//PrimitiveTypes::Int32	CurrentAnimCycle;

		Vector3				Position;
		Vector3 			Velocity;		/** Current velocity of the particle */
		Vector3 			Acceleration;	/** linear acceleration of the particle */
		Vector4				AngularVelocity;/** The Angular velocity of the particle */
		float				Speed;			/** The speed of the particle */
		Vector4 			Color;			/** Current Color of the particle */
		Vector4 			DeltaColor;		/**  Color Change Per update. This is prefered to interping to save calcs */
		short 				Flags;			/** flags for tracking if particle is alive or dead. */
		float 				Lifetime;		/** Time the particle gets to live*/
		float 				TimeLived;		/** Time the particle has been alive */

		float				Width;
		float				Height;
		int					AnimationCycles;
		int					NumRows;
		int					NumColumns;

		//*************//
		//** GETTERS **//
		//*************//
		virtual char* GetFilename(){ return "";}
		virtual char* GetPackage(){ return "";}
		virtual PrimitiveTypes::Int32 GetNumAnimationCycles(){return -1;}
		virtual PrimitiveTypes::Int32 GetNumRows(){return -1;}
		virtual PrimitiveTypes::Int32 GetNumColumns(){return -1;}
		virtual PrimitiveTypes::Int32 GetCurrentAnimCycle(){return -1;}
		//*************//
		//** UPDATES **//
		//*************//
		/**
		 * @todo implement and integrate 
		 */
		virtual void Update(const float& DeltaTime);
				/**
		 * @todo implement and integrate 
		 */
		virtual void UpdateVelocity(const float& DeltaTime);
		/**
		 * @todo implement and integrate 
		 */
		virtual void UpdatePosition(const float& DeltaTime);
		/**
		 * @todo implement and integrate
		 */
		virtual void UpdateAngularVelocity(const float& DeltaTime);
		/**
		 * @todo implement and integrate
		 */
		virtual void UpdateWidth(const float& DeltaTime);
		/**
		 * @todo implement and integrate
		 */
		virtual void UpdateHeight(const float& DeltaTime);
		/**
		 * @todo implement and integrate
		 */
		virtual void UpdateColor(const float& DeltaTime);
		/**
		 * @todo implement and integrate
		 */
		virtual void UpdateTimeLived(const float& DeltaTime);
	};

};/* end namespace Components */
};/* end namespace PE */