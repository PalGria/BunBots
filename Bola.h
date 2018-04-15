#ifndef __BOLA_H__
#define __BOLA_H__

#include <irrlicht.h>
#include <stdio.h>
#include "GameObject.h"
#include "GameObjectOverworld.h"
#include "TextedGameObject.h"

class Bola : public GameObjectOverWorld {
	private:
		std::string name;
		irr::core::vector3df pos;
		irr::core::vector3df speed;
		irr::core::vector3df acceleration;
	public:
        Bola();
        Bola (std::string n, std::string t);

		void addModelBola(irr::scene::ISceneManager* smgraux, irr::video::IVideoDriver* driveraux);
		void addModelBola(irr::scene::ISceneManager* smgraux, irr::video::IVideoDriver* driveraux, irr::core::vector3df position);
		void update();

};

#endif