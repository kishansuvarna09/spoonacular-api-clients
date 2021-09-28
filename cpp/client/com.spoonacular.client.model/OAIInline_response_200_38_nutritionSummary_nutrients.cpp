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


#include "OAIInline_response_200_38_nutritionSummary_nutrients.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIInline_response_200_38_nutritionSummary_nutrients::OAIInline_response_200_38_nutritionSummary_nutrients(QString json) {
    this->init();
    this->fromJson(json);
}

OAIInline_response_200_38_nutritionSummary_nutrients::OAIInline_response_200_38_nutritionSummary_nutrients() {
    this->init();
}

OAIInline_response_200_38_nutritionSummary_nutrients::~OAIInline_response_200_38_nutritionSummary_nutrients() {

}

void
OAIInline_response_200_38_nutritionSummary_nutrients::init() {
    
    m_name_isSet = false;
    m_name_isValid = false;
    
    m_amount_isSet = false;
    m_amount_isValid = false;
    
    m_unit_isSet = false;
    m_unit_isValid = false;
    
    m_percent_daily_needs_isSet = false;
    m_percent_daily_needs_isValid = false;
    }

void
OAIInline_response_200_38_nutritionSummary_nutrients::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIInline_response_200_38_nutritionSummary_nutrients::fromJsonObject(QJsonObject json) {
    
    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    
    m_amount_isValid = ::OpenAPI::fromJsonValue(amount, json[QString("amount")]);
    
    
    m_unit_isValid = ::OpenAPI::fromJsonValue(unit, json[QString("unit")]);
    
    
    m_percent_daily_needs_isValid = ::OpenAPI::fromJsonValue(percent_daily_needs, json[QString("percentDailyNeeds")]);
    
    
}

QString
OAIInline_response_200_38_nutritionSummary_nutrients::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIInline_response_200_38_nutritionSummary_nutrients::asJsonObject() const {
    QJsonObject obj;
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(amount.isSet()){
        obj.insert(QString("amount"), ::OpenAPI::toJsonValue(amount));
    }
	if(m_unit_isSet){
        obj.insert(QString("unit"), ::OpenAPI::toJsonValue(unit));
    }
	if(percent_daily_needs.isSet()){
        obj.insert(QString("percentDailyNeeds"), ::OpenAPI::toJsonValue(percent_daily_needs));
    }
    return obj;
}


QString
OAIInline_response_200_38_nutritionSummary_nutrients::getName() const {
    return name;
}
void
OAIInline_response_200_38_nutritionSummary_nutrients::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}


OAINumber
OAIInline_response_200_38_nutritionSummary_nutrients::getAmount() const {
    return amount;
}
void
OAIInline_response_200_38_nutritionSummary_nutrients::setAmount(const OAINumber &amount) {
    this->amount = amount;
    this->m_amount_isSet = true;
}


QString
OAIInline_response_200_38_nutritionSummary_nutrients::getUnit() const {
    return unit;
}
void
OAIInline_response_200_38_nutritionSummary_nutrients::setUnit(const QString &unit) {
    this->unit = unit;
    this->m_unit_isSet = true;
}


OAINumber
OAIInline_response_200_38_nutritionSummary_nutrients::getPercentDailyNeeds() const {
    return percent_daily_needs;
}
void
OAIInline_response_200_38_nutritionSummary_nutrients::setPercentDailyNeeds(const OAINumber &percent_daily_needs) {
    this->percent_daily_needs = percent_daily_needs;
    this->m_percent_daily_needs_isSet = true;
}

bool
OAIInline_response_200_38_nutritionSummary_nutrients::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(amount.isSet()){ isObjectUpdated = true; break;}
    
        if(m_unit_isSet){ isObjectUpdated = true; break;}
    
        if(percent_daily_needs.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIInline_response_200_38_nutritionSummary_nutrients::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_amount_isValid && m_unit_isValid && m_percent_daily_needs_isValid && true;
}

}
