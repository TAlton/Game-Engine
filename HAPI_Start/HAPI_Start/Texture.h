#pragma once
class Texture
{
public:

	short m_shWidth{ 0 },
		m_shHeight{ 0 };
	
	unsigned char* m_pTexture{ nullptr };

	Texture() = default;
	Texture(int width, int height) : m_shWidth(static_cast<short>(width)), m_shHeight(static_cast<short>(height)) {}
	Texture(int width, int height, unsigned char* ptr) : m_shWidth(static_cast<short>(width)), m_shHeight(static_cast<short>(height)), m_pTexture(ptr) {}
	Texture(short width, short height) : m_shWidth(width), m_shHeight(height) {}
	Texture(short width, short height, unsigned char* ptr) : m_shWidth(width), m_shHeight(height), m_pTexture(ptr) {}

	~Texture();

	short GetWidth() { return this->m_shWidth; }
	short GetHeight() { return this->m_shHeight; }
	unsigned char* GetPointer() { return this->m_pTexture; }
};
