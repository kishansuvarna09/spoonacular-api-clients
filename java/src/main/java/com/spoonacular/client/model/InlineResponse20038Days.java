/*
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


package com.spoonacular.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import com.spoonacular.client.model.InlineResponse20038Items;
import com.spoonacular.client.model.InlineResponse20038NutritionSummary;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;

/**
 * InlineResponse20038Days
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-09-28T20:40:32.759+02:00[Europe/Berlin]")
public class InlineResponse20038Days {
  public static final String SERIALIZED_NAME_NUTRITION_SUMMARY = "nutritionSummary";
  @SerializedName(SERIALIZED_NAME_NUTRITION_SUMMARY)
  private InlineResponse20038NutritionSummary nutritionSummary = null;

  public static final String SERIALIZED_NAME_NUTRITION_SUMMARY_BREAKFAST = "nutritionSummaryBreakfast";
  @SerializedName(SERIALIZED_NAME_NUTRITION_SUMMARY_BREAKFAST)
  private InlineResponse20038NutritionSummary nutritionSummaryBreakfast = null;

  public static final String SERIALIZED_NAME_NUTRITION_SUMMARY_LUNCH = "nutritionSummaryLunch";
  @SerializedName(SERIALIZED_NAME_NUTRITION_SUMMARY_LUNCH)
  private InlineResponse20038NutritionSummary nutritionSummaryLunch = null;

  public static final String SERIALIZED_NAME_NUTRITION_SUMMARY_DINNER = "nutritionSummaryDinner";
  @SerializedName(SERIALIZED_NAME_NUTRITION_SUMMARY_DINNER)
  private InlineResponse20038NutritionSummary nutritionSummaryDinner = null;

  public static final String SERIALIZED_NAME_DATE = "date";
  @SerializedName(SERIALIZED_NAME_DATE)
  private BigDecimal date;

  public static final String SERIALIZED_NAME_DAY = "day";
  @SerializedName(SERIALIZED_NAME_DAY)
  private String day;

  public static final String SERIALIZED_NAME_ITEMS = "items";
  @SerializedName(SERIALIZED_NAME_ITEMS)
  private List<InlineResponse20038Items> items = new ArrayList<>();

  public InlineResponse20038Days nutritionSummary(InlineResponse20038NutritionSummary nutritionSummary) {
    this.nutritionSummary = nutritionSummary;
    return this;
  }

   /**
   * Get nutritionSummary
   * @return nutritionSummary
  **/
  @ApiModelProperty(value = "")
  public InlineResponse20038NutritionSummary getNutritionSummary() {
    return nutritionSummary;
  }

  public void setNutritionSummary(InlineResponse20038NutritionSummary nutritionSummary) {
    this.nutritionSummary = nutritionSummary;
  }

  public InlineResponse20038Days nutritionSummaryBreakfast(InlineResponse20038NutritionSummary nutritionSummaryBreakfast) {
    this.nutritionSummaryBreakfast = nutritionSummaryBreakfast;
    return this;
  }

   /**
   * Get nutritionSummaryBreakfast
   * @return nutritionSummaryBreakfast
  **/
  @ApiModelProperty(value = "")
  public InlineResponse20038NutritionSummary getNutritionSummaryBreakfast() {
    return nutritionSummaryBreakfast;
  }

  public void setNutritionSummaryBreakfast(InlineResponse20038NutritionSummary nutritionSummaryBreakfast) {
    this.nutritionSummaryBreakfast = nutritionSummaryBreakfast;
  }

  public InlineResponse20038Days nutritionSummaryLunch(InlineResponse20038NutritionSummary nutritionSummaryLunch) {
    this.nutritionSummaryLunch = nutritionSummaryLunch;
    return this;
  }

   /**
   * Get nutritionSummaryLunch
   * @return nutritionSummaryLunch
  **/
  @ApiModelProperty(value = "")
  public InlineResponse20038NutritionSummary getNutritionSummaryLunch() {
    return nutritionSummaryLunch;
  }

  public void setNutritionSummaryLunch(InlineResponse20038NutritionSummary nutritionSummaryLunch) {
    this.nutritionSummaryLunch = nutritionSummaryLunch;
  }

  public InlineResponse20038Days nutritionSummaryDinner(InlineResponse20038NutritionSummary nutritionSummaryDinner) {
    this.nutritionSummaryDinner = nutritionSummaryDinner;
    return this;
  }

   /**
   * Get nutritionSummaryDinner
   * @return nutritionSummaryDinner
  **/
  @ApiModelProperty(value = "")
  public InlineResponse20038NutritionSummary getNutritionSummaryDinner() {
    return nutritionSummaryDinner;
  }

  public void setNutritionSummaryDinner(InlineResponse20038NutritionSummary nutritionSummaryDinner) {
    this.nutritionSummaryDinner = nutritionSummaryDinner;
  }

  public InlineResponse20038Days date(BigDecimal date) {
    this.date = date;
    return this;
  }

   /**
   * Get date
   * @return date
  **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getDate() {
    return date;
  }

  public void setDate(BigDecimal date) {
    this.date = date;
  }

  public InlineResponse20038Days day(String day) {
    this.day = day;
    return this;
  }

   /**
   * Get day
   * @return day
  **/
  @ApiModelProperty(required = true, value = "")
  public String getDay() {
    return day;
  }

  public void setDay(String day) {
    this.day = day;
  }

  public InlineResponse20038Days items(List<InlineResponse20038Items> items) {
    this.items = items;
    return this;
  }

  public InlineResponse20038Days addItemsItem(InlineResponse20038Items itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<>();
    }
    this.items.add(itemsItem);
    return this;
  }

   /**
   * Get items
   * @return items
  **/
  @ApiModelProperty(value = "")
  public List<InlineResponse20038Items> getItems() {
    return items;
  }

  public void setItems(List<InlineResponse20038Items> items) {
    this.items = items;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20038Days inlineResponse20038Days = (InlineResponse20038Days) o;
    return Objects.equals(this.nutritionSummary, inlineResponse20038Days.nutritionSummary) &&
        Objects.equals(this.nutritionSummaryBreakfast, inlineResponse20038Days.nutritionSummaryBreakfast) &&
        Objects.equals(this.nutritionSummaryLunch, inlineResponse20038Days.nutritionSummaryLunch) &&
        Objects.equals(this.nutritionSummaryDinner, inlineResponse20038Days.nutritionSummaryDinner) &&
        Objects.equals(this.date, inlineResponse20038Days.date) &&
        Objects.equals(this.day, inlineResponse20038Days.day) &&
        Objects.equals(this.items, inlineResponse20038Days.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(nutritionSummary, nutritionSummaryBreakfast, nutritionSummaryLunch, nutritionSummaryDinner, date, day, items);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20038Days {\n");
    sb.append("    nutritionSummary: ").append(toIndentedString(nutritionSummary)).append("\n");
    sb.append("    nutritionSummaryBreakfast: ").append(toIndentedString(nutritionSummaryBreakfast)).append("\n");
    sb.append("    nutritionSummaryLunch: ").append(toIndentedString(nutritionSummaryLunch)).append("\n");
    sb.append("    nutritionSummaryDinner: ").append(toIndentedString(nutritionSummaryDinner)).append("\n");
    sb.append("    date: ").append(toIndentedString(date)).append("\n");
    sb.append("    day: ").append(toIndentedString(day)).append("\n");
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}
