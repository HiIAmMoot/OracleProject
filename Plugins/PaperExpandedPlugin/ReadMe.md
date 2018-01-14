# Paper Expanded
Currently Supports: UE4.16

Contains a number of blueprint functions for the modification of tilemaps at runtime as well as the creation of prefab data to allow you to draw objects into a map and have them spawned on Begin Play.

## Classes
![PaperExpandedClasses](https://github.com/ldmfield/Paper-Expanded-Plugin/blob/master/images/PaperExpandedClasses.PNG)

### TileBlueprint Data and Factory

Setups a new asset type called Tile Blueprint Data. Each Tile Blueprint Data stores the following information.

![BlueprintDataDetails](https://github.com/ldmfield/Paper-Expanded-Plugin/blob/master/images/TileBlueprintAsset.PNG)

* Tile Set: the tile set the chosen tiles will spawn on
* Replace: if the blueprints in this data replace tiles when spawned with an empty space
* Blueprints: the index of the tile and the class of blueprint that spawns on it

### Blueprint Spawner Component

[![IMAGE ALT TEXT HERE](http://img.youtube.com/vi/INHgycJcmwU/0.jpg)](http://www.youtube.com/watch?v=INHgycJcmwU)

Watch in use above.

![BlueprintSpawnerDetails](https://github.com/ldmfield/Paper-Expanded-Plugin/blob/master/images/BlueprintSpawnerDetails.PNG)

To make use of Tile Blueprint Data we need to add a blueprint spawner component and a paper tile map component to an actor.

You can also use the Tile Blueprint Map Actor which does the below steps for you.

![BlueprintSpawnerInitialise](https://github.com/ldmfield/Paper-Expanded-Plugin/blob/master/images/InitialiseSpawner.PNG)
The component should be initialised in the actor event graph

![BlueprintSpawnerSpawn](https://github.com/ldmfield/Paper-Expanded-Plugin/blob/master/images/SpawnBlueprintsFromTileData.PNG)
After initialising the component we can call spawn blueprints to use all tile data assets chosen to create and spawn blueprints on the map.

![BlueprintSpawnerSpawnAt](https://github.com/ldmfield/Paper-Expanded-Plugin/blob/master/images/BlueprintSpawnerSpawnAt.PNG)
Alternativly we can also spawn blueprints at a location and layer using the above node.
Replace removes the tile at the location.

### Tile Information Nodes

Both these nodes are built to be used with an orthographic camera and line trace under cursor/touch but can also be use with line traces from actors too.

![TileNodes](https://github.com/ldmfield/Paper-Expanded-Plugin/blob/master/images/TileInformation.PNG)

* Axis: If you are using the Y or Z axis to represent up in your 2D GAME
* Timemap Comp: That we will be testing for an objects location
* Hit Location: The hit location from trace / collision
* Ignore Collision THickness: Should we ignore the collision thickness of the tilemap

### Flipbook Nodes

![IsSocketOnFrame](https://github.com/ldmfield/Paper-Expanded-Plugin/blob/master/images/IsSocketOnFrame.PNG)

Checks if the named socket is on the index frame in a flipbook.

Copyright 2017 Leon Field

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

