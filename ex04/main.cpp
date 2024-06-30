#include <fstream>
#include <iostream>
#include <string>

int replace(const std::string& filename, const std::string& s1, const std::string& s2)
{
    std::ifstream inputFile(filename.data());
    if (!inputFile)
    {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return 1;
    }

    std::string fileContent;
    std::string line;
    while (getline(inputFile, line))
        fileContent += line + "\n";
    inputFile.close();

    std::string newContent;
    size_t pos;
    size_t prevPos = 0;
    while ((pos = fileContent.find(s1, prevPos)) != std::string::npos)
    {
        newContent += fileContent.substr(prevPos, pos - prevPos);
        newContent += s2;
        prevPos = pos + s1.length();
    }
    newContent += fileContent.substr(prevPos);

    std::ofstream outputFile((filename + ".replace").data());
    if (!outputFile)
    {
        std::cerr << "Error: Cannot create file " << filename << ".replace" << std::endl;
        return 1;
    }

    outputFile << newContent;
    outputFile.close();

    return 0;
}

int main(const int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    const std::string filename = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];

    return replace(filename, s1, s2);
}
