# ShadowDebuff

 Módulo de AzerothCore que permite remover el buff del item de la shadowmourne en arenas evitando que se acumule.

##  Módulo de Azerothcore

* Configurable el encendido y apagado del módulo.

> conf\Shadow.conf

```
[worldserver]

#
# Activar debuff aura de stack de shadowmourne
# default: true
#

enableShadowDebuff=true
```

## Requisitos

* v2.0.0+ [Azerothcore](https://github.com/azerothcore/azerothcore-wotlk) 

## Instalación 

```
1) Usar el comando `git clone` o descargarlo manualmente.
2) Mover el contenido a la carpeta raíz de AzerothCore en /modules.
3) Re-run cmake y compilar AzerothCore limpio.
```

## Creditos 

* [Xhaher](https://github.com/xhaher) (Desarrollador del módulo)
* AzerothCore: [repository](https://github.com/azerothcore) - [website](http://azerothcore.org/) - [discord chat community](https://discord.gg/PaqQRkd)