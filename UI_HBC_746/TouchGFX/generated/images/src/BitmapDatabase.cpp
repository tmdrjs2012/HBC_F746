// 4.17.0 0xfb7a70bb
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_buttons_round_edge_icon_button[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID = 0, Size: 60x60 pixels
extern const unsigned char image_blue_buttons_round_edge_icon_button_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID = 1, Size: 60x60 pixels
extern const unsigned char image_blue_icons_down_arrow_32[]; // BITMAP_BLUE_ICONS_DOWN_ARROW_32_ID = 2, Size: 30x17 pixels
extern const unsigned char image_blue_icons_up_arrow_32[]; // BITMAP_BLUE_ICONS_UP_ARROW_32_ID = 3, Size: 30x17 pixels
extern const unsigned char image_hbclogo[]; // BITMAP_HBCLOGO_ID = 4, Size: 108x94 pixels
extern const unsigned char image_matrix_box213[]; // BITMAP_MATRIX_BOX213_ID = 5, Size: 213x254 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_buttons_round_edge_icon_button, 0, 60, 60, 7, 6, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_edge_icon_button_pressed, 0, 60, 60, 7, 6, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 46, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_down_arrow_32, 0, 30, 17, 11, 10, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_up_arrow_32, 0, 30, 17, 11, 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_hbclogo, 0, 108, 94, 0, 0, 108, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 94, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_matrix_box213, 0, 213, 254, 3, 10, 207, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 234, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
