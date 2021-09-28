/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.0
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIInline_response_200_28_servings.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_28_servings::OAIInline_response_200_28_servings(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_28_servings::OAIInline_response_200_28_servings() {
    this->init();
}

OAIInline_response_200_28_servings::~OAIInline_response_200_28_servings() {

}

void
OAIInline_response_200_28_servings::init() {
    
    m_number_isSet = false;
    m_number_isValid = false;
    
    m_size_isSet = false;
    m_size_isValid = false;
    
    m_unit_isSet = false;
    m_unit_isValid = false;
    }

void
OAIInline_response_200_28_servings::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_28_servings::fromJsonObject(QJsonObject json) {
    
    m_number_isValid = ::OpenAPI::fromJsonValue(number, json[QString("number")]);
    
    
    m_size_isValid = ::OpenAPI::fromJsonValue(size, json[QString("size")]);
    
    
    m_unit_isValid = ::OpenAPI::fromJsonValue(unit, json[QString("unit")]);
    
    
}

QString
OAIInline_response_200_28_servings::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_28_servings::asJsonObject() const {
    QJsonObject obj;
	if(number.isSet()){
        obj.insert(QString("number"), ::OpenAPI::toJsonValue(number));
    }
	if(size.isSet()){
        obj.insert(QString("size"), ::OpenAPI::toJsonValue(size));
    }
	if(m_unit_isSet){
        obj.insert(QString("unit"), ::OpenAPI::toJsonValue(unit));
    }
    return obj;
}


OAINumber
OAIInline_response_200_28_servings::getNumber() const {
    return number;
}
void
OAIInline_response_200_28_servings::setNumber(const OAINumber &number) {
    this->number = number;
    this->m_number_isSet = true;
}


OAINumber
OAIInline_response_200_28_servings::getSize() const {
    return size;
}
void
OAIInline_response_200_28_servings::setSize(const OAINumber &size) {
    this->size = size;
    this->m_size_isSet = true;
}


QString
OAIInline_response_200_28_servings::getUnit() const {
    return unit;
}
void
OAIInline_response_200_28_servings::setUnit(const QString &unit) {
    this->unit = unit;
    this->m_unit_isSet = true;
}

bool
OAIInline_response_200_28_servings::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(number.isSet()){ isObjectUpdated = true; break;}
    
        if(size.isSet()){ isObjectUpdated = true; break;}
    
        if(m_unit_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_28_servings::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_number_isValid && m_size_isValid && m_unit_isValid && true;
}

}
