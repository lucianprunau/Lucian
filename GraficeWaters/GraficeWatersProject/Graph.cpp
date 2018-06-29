#include "Graph.h"


Graph::Graph()
{
}

Graph::Graph(std::string NameOfFile)
{
	std::ifstream fin(NameOfFile);
	while (!fin.eof()) {
		std::pair<double,double> aux;
		fin >> aux.first;
		fin >> aux.second;
		this->m_Points.push_back(aux);
	}
	this->m_Points.pop_back();
}

void Graph::DisplayOnScreen()
{
	for (int i = 0; i < this->m_Points.size(); i++)
	{
		std::cout << this->m_Points.at(i).first << " " << this->m_Points.at(i).second << std::endl;
	}
}



void Graph::Setm_Points(std::vector<std::pair<double, double>>)
{

}

std::vector<std::pair<double, double>> Graph::Getm_Points()
{
	for (int i = 0; i < this->m_Points.size(); i++)
	{
		std::cout << this->m_Points.at(i).first << " " << this->m_Points.at(i).second <<"---";
	}
	return this->m_Points ;
}

Graph::~Graph()
{
}
