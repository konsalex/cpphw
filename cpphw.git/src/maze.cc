#include "maze.hh"

/////////////////////
// Private helpers //
/////////////////////
//  :: !access operators!


// Take 2D expanded coordinates and compute the corresponding 1D
  // array index
int Maze::getArrayIndex(const Location loc) const{

    int index = loc.row * numCols + loc.col ;
    cout<<index<<endl;
    return index;

}

Location Maze::getCellArrayCoord(int cellRow, int cellCol) const{

    int r1 = 2 * cellRow +1;
    int c1 = 2* cellCol +1;
    Location loc = Location(r1,c1);
    return loc;

}

Location Maze::getWallArrayCoord(int cellRow, int cellCol,
                                 Direction direction) const{

                                     int r1,c1;

  if(direction==0)    //North
    {
    r1 = 2 * cellRow ;
    c1 = 2* cellCol +1;

  }else if(direction==1)   //East
  {
r1 = 2 * cellRow+1 ;
    c1 = 2* cellCol +2;

  }else if(direction==2)    //South
  {
r1 = 2 * cellRow +2;
    c1 = 2* cellCol +1;

  }else                       //West
{
r1 = 2 * cellRow+1 ;
    c1 = 2* cellCol ;

  }

Location loc = Location(r1,c1);
    return loc;


}

//////////////////////////////////////////
// Constructors - Deconstructors - Copy //
//////////////////////////////////////////

Maze::Maze(int rows, int cols){
  // <YOUR-CODE-HERE>
numRows=rows;
numCols=cols;

}

Maze::Maze(const Maze &m){


}

Maze::~Maze(){
  // <YOUR-CODE-HERE>
}

///////////////////////
// Operator overload //
///////////////////////

Maze& Maze::operator=(const Maze &m){
  // <YOUR-CODE-HERE>
}

///////////////
// Accessors //
///////////////

int Maze::getNumRows() const{
  // <YOUR-CODE-HERE>
}

int Maze::getNumCols() const{
  // <YOUR-CODE-HERE>
}

Location Maze::getStart() const{
  // <YOUR-CODE-HERE>
}

Location Maze::getEnd() const{
  // <YOUR-CODE-HERE>
}

MazeCell Maze::getCell(int cellRow, int cellCol) const{
  // <YOUR-CODE-HERE>
}

Location Maze::getNeighborCell(int cellRow, int cellCol, Direction direction) const{
  // <YOUR-CODE-HERE>
}

bool Maze::hasWall(int cellRow, int cellCol, Direction direction) const{
  // <YOUR-CODE-HERE>
}

bool Maze::isVisited(int cellRow, int cellCol) const{
  // <YOUR-CODE-HERE>
}

////////////////
// Operations //
////////////////

void Maze::setStart(int row, int col){
  // <YOUR-CODE-HERE>
}

void Maze::setEnd(int row, int col){
  // <YOUR-CODE-HERE>
}

void Maze::clear(){
  // <YOUR-CODE-HERE>
}

void Maze::setAllWalls(){
  // <YOUR-CODE-HERE>
}

void Maze::setCell(int cellRow, int cellCol, MazeCell val){
  // <YOUR-CODE-HERE>
}

void Maze::setWall(int cellRow, int cellCol, Direction direction){
  // <YOUR-CODE-HERE>
}

void Maze::clearWall(int cellRow, int cellCol, Direction direction){
  // <YOUR-CODE-HERE>
}

void Maze::setVisited(int cellRow, int cellCol){
  // <YOUR-CODE-HERE>
}

void Maze::print(ostream &os) const{
  // <YOUR-CODE-HERE>
}
