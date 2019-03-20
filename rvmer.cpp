#include<iostream>
#include<iterator>
#include"rvmer.hpp"
#include"rvmmeshhelper.h"
rvmreaderlib::rvmreaderlib():RVMReader(){
  
}

rvmreaderlib::~rvmreaderlib(){
}

void rvmreaderlib::startDocument(){
  std::cout << "startDocument\n";
};
void rvmreaderlib::endDocument(){
};

void rvmreaderlib::startHeader(const std::string& banner, const std::string& fileNote, const std::string& date, const std::string& user, const std::string& encoding){
std::cout << banner <<"\n"<< fileNote <<"\n"<< date <<"\n"<< user <<"\n"<< encoding;
};
void rvmreaderlib::endHeader(){
};

void rvmreaderlib::startModel(const std::string& projectName, const std::string& name){
  std::cout << projectName <<"\n"<<name;
};
void rvmreaderlib::endModel(){
};

void rvmreaderlib::startGroup(const std::string& name, const Vector3F& translation, const int& materialId){
  std::cout <<"\n"<<name <<"\nx "<<translation[0] <<"\ny "<< translation[1] <<"\nz "<< translation[2];
};
void rvmreaderlib::endGroup(){
};

void rvmreaderlib::startMetaData(){
};
void rvmreaderlib::endMetaData(){
};

void rvmreaderlib::startMetaDataPair(const std::string& name, const std::string& value){
};
void rvmreaderlib::endMetaDataPair(){
};

void rvmreaderlib::createPyramid(const std::array<float, 12>& matrix, const Primitives::Pyramid& params){
  std::cout << "createPyramid";
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, "\n"));
};

void rvmreaderlib::createBox(const std::array<float, 12>& matrix, const Primitives::Box& params){
  std::cout << "createBox";
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, "\n"));
};

void rvmreaderlib::createRectangularTorus(const std::array<float, 12>& matrix, const Primitives::RectangularTorus& params){
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, "\n"));
};

void rvmreaderlib::createCircularTorus(const std::array<float, 12>& matrix, const Primitives::CircularTorus& params){
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, "\n"));
};

void rvmreaderlib::createEllipticalDish(const std::array<float, 12>& matrix, const Primitives::EllipticalDish& params){
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, "\n"));
};

void rvmreaderlib::createSphericalDish(const std::array<float, 12>& matrix, const Primitives::SphericalDish& params){
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, "\n"));
};

void rvmreaderlib::createSnout(const std::array<float, 12>& matrix, const Primitives::Snout& params){
  std::cout << "\ncreateSnout ";
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, " "));
  Mesh c = RVMMeshHelper2::makeSnout(params, RVMMeshHelper2::infoSnoutNumSides(params, 100, 100));
  std::cout << "\npoints: "<< c.positionIndex.size() <<" normals: "<< c.normalIndex.size();
  
};

void rvmreaderlib::createCylinder(const std::array<float, 12>& matrix, const Primitives::Cylinder& params){
  std::cout << "\ncreateCyl";
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, "\n"));
};

void rvmreaderlib::createSphere(const std::array<float, 12>& matrix, const Primitives::Sphere& params){
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, "\n"));
};

void rvmreaderlib::createLine(const std::array<float, 12>& matrix, const float& startx, const float& endx){
  std::cout << "\ncreateLine ";
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, " "));
  std::cout << "\nstartx " << startx << "\nendy " << endx;
};

void rvmreaderlib::createFacetGroup(const std::array<float, 12>& matrix, const std::vector<std::vector<std::vector<std::pair<Vector3F, Vector3F> > > >& vertexes){
  std::cout << "\ncreateFacetGroup ";
  std::copy(std::begin(matrix),
          std::end(matrix),
          std::ostream_iterator<float>(std::cout, " "));
  Mesh c;
  RVMMeshHelper2::tesselateFacetGroup(vertexes, &c);
  std::cout << "\npoints: "<< c.positionIndex.size() <<" normals: "<< c.normalIndex.size();
 
};
