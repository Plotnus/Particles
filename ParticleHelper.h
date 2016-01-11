/**
 * "If you spend too much time thinking about a thing, you'll never get it done." -Bruce Lee
 *
 *
 * This header file provides structs and definitions used in the particle system.
 * It exists as a place to keep structs and other files to keep the system cleanly
 * divided as it did not seem appropriate to include these structs with the other
 * files
 *
 * Coded by: Plotner
 * Last Update: Dec 12, 2015
 */

/**
 * Enums for the different particle effects
 */
#pragma once
#include "PrimeEngine/PrimitiveTypes/PrimitiveTypes.h"

namespace PE
{
namespace Components
{

	enum PEmitterType
	 {
 		Instant,
 		Bursts,
 		Continual,
 		Periodic
	 };
	enum ParticleType
	 {
 		Sparks,
 		WaterSpray,
 		Lightning,
 		Snow,
 		Fireworks
	 };

	enum ParticleState
	 {
 		Active,
 		Deactivating,
 		Inactive
	 };

	/**
	 * Enums for the different types of emitters blend modes
	 */
	 enum PEmitterBlendMode
	 {
 		Plain,
 		Blur /** stretches the particle to span distance. Useful for sparks */
	 };

	 struct AABB
	 {
		Vector4 Center;
		PrimitiveTypes::Int32 XExtents;
		PrimitiveTypes::Int32 YExtents;
		PrimitiveTypes::Int32 ZExtents;
	 };

};/* end namespace Components */
};/* end namespace PE */