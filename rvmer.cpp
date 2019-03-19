#include"rvmer.hpp"

rvmreaderlib::rvmreaderlib():RVMReader(){
  
}

rvmreaderlib::~rvmreaderlib(){
}

void rvmreaderlib::startDocument(){
};
void rvmreaderlib::endDocument(){
};

void rvmreaderlib::startHeader(const std::string& banner, const std::string& fileNote, const std::string& date, const std::string& user, const std::string& encoding){
};
void rvmreaderlib::endHeader(){
};

void rvmreaderlib::startModel(const std::string& projectName, const std::string& name){
};
void rvmreaderlib::endModel(){
};

void rvmreaderlib::startGroup(const std::string& name, const Vector3F& translation, const int& materialId){
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
};

void rvmreaderlib::createBox(const std::array<float, 12>& matrix, const Primitives::Box& params){
};

void rvmreaderlib::createRectangularTorus(const std::array<float, 12>& matrix, const Primitives::RectangularTorus& params){
};

void rvmreaderlib::createCircularTorus(const std::array<float, 12>& matrix, const Primitives::CircularTorus& params){
};

void rvmreaderlib::createEllipticalDish(const std::array<float, 12>& matrix, const Primitives::EllipticalDish& params){
};

void rvmreaderlib::createSphericalDish(const std::array<float, 12>& matrix, const Primitives::SphericalDish& params){
};

void rvmreaderlib::createSnout(const std::array<float, 12>& matrix, const Primitives::Snout& params){
};

void rvmreaderlib::createCylinder(const std::array<float, 12>& matrix, const Primitives::Cylinder& params){
};

void rvmreaderlib::createSphere(const std::array<float, 12>& matrix, const Primitives::Sphere& params){
};

void rvmreaderlib::createLine(const std::array<float, 12>& matrix, const float& startx, const float& endx){
};

void rvmreaderlib::createFacetGroup(const std::array<float, 12>& matrix, const std::vector<std::vector<std::vector<std::pair<Vector3F, Vector3F> > > >& vertexes){
};
